#### !!!! Forked from source code https://github.com/meiqua/patch_linemod 
#### !!!! Original Author : [Chinese blog](https://zhuanlan.zhihu.com/p/45538349)

#### Update the kmeans part in patch linemod procedure with tsne and other clustering efforts.
#### Update by: Tielin Zhang and Yangyang in CASIA

### (1) dataset

get dataset under top level folder folder using following cmd  
```sh
wget -r -np -nH --cut-dirs=1 -R index.html http://ptak.felk.cvut.cz/6DB/public/
cp public/ patchlinemod_dataset/
```

### (2) pysixd (already integrated):

files: params/  pysixd/  t_less_toolkit/  tools/  
copied from [sixd_toolkit](https://github.com/thodan/sixd_toolkit)  
deal with model reading/rendering, datasets reading and evaluation  


### (3) install opencv3 with contrib rgbd module  

hwo to install opencv3.4.6: https://blog.csdn.net/echoamor/article/details/83022352

Download these two files:
```sh
git clone -b 3.4 https://github.com/opencv/opencv.git
git clone -b 3.4 https://github.com/opencv/opencv_contrib.git
cp opencv_contrib opencv/
mkdir opencv/build
cd opencv/build

### !! quit virtual env
cmake -D CMAKE_BUILD_TYPE=Release -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH=/home/bibo/Data/patchlinemod_dataset/opencv_contrib/modules ..
# [optional] use the gui
cmake-gui ..  # CMAKE_BUILD_TYPE =RELEASE; OPENCV_EXTRA_MODULES_PATH=/opencv_contrib/modules;BUILD_opencv_world=YES;
make -j8
### !! restart virtual env

sudo make install
sudo sh -c 'echo "/usr/local/lib" >> /etc/ld.so.conf.d/opencv.conf'
sudo ldconfig
sudo vim /etc/bash.bashrc
add PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/local/lib/pkgconfig
add export PKG_CONFIG_PATH
```
hwo to uninstall opencv:  https://zhuanlan.zhihu.com/p/38738976	

### (4) install pybind11 

```sh
git clone https://github.com/pybind/pybind11
mkdir build
cd build
cmake .. # pytest is needed: pip install pytest
make check -j 4
make install
```

### (5) install open3d(for icp)
install open3d(http://www.open3d.org/docs/compilation.html#ubuntu)
```sh
cd open3d
util/scripts/install-deps-ubuntu.sh

node -v
npm -v

mv build build.bk
mkdir build 
cd build

cmake -DCMAKE_INSTALL_PREFIX=/usr/local ..
sudo make -j4

sudo make python-package
sudo make pip-package
sudo make install-pip-package
sudo make install
cd Open3d/build/lib/python_package/pip_package
pip3 install open3d-0.5.0.0-cp35m-linux_x86_64.whl
# until now,  make sure there are open3d in /usr/local/include

# test in python
import open3d

# replace installed open3d with new  
sudo cp -R ./projectpath/Open3D_bk /usr/local/include/Open3D
```

### (6) install others
```sh
pip inst
all -r requirements.txt
```

### (7) C++ and Python packages install steps:

```sh
cd linemodLevelup/
mkdir build
cd build
# check the cmakelists.txt for the path requirement of open3d, opencv, pybind...
cmake ..
make
cd linemodLevelup/
python setup.py install #(get the linemodlevelup_pybind in import python)
python patch_linemod_test.py

```

### (8) how to evaluate

patch_linemod_test.py, 57-66, select dataset & mode, train & test  
tools/eval_calc_errors.py, 19-27, select dataset, run  
tools/eval_loc.py, 180-186, select dataset, run  
Results are saved to top_level_folder/eval  

[Chinese blog](https://zhuanlan.zhihu.com/p/45538349)
