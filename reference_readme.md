

#pip3 install --upgrade pip setuptools
#sudo pip3 install Cython
#sudo pip3 install -r requirements.txt
#sudo pip3 install pybind11
(#sudo pip3 install pybind)
#sudo pip3 install open3d-python
(#sudo pip3 install py3d)
(sudo apt-get install libglfw3)

https://itsfoss.com/dpkg-returned-an-error-code-1/


install opencv3.4.1:
https://blog.csdn.net/echoamor/article/details/83022352
git clone -b 3.4 https://github.com/opencv/opencv.git
https://github.com/opencv/opencv_contrib.git

then in build:sudo make install
sudo sh -c 'echo "/usr/local/lib" >> /etc/ld.so.conf.d/opencv.conf'
sudo ldconfig


opencv 3.3.1 https://www.learnopencv.com/install-opencv3-on-ubuntu/

uninstall opencv:https://zhuanlan.zhihu.com/p/38738976		



install open3D:http://www.open3d.org/docs/compilation.html
		https://liuqiangblog.github.io/2018/07/23/Open3D开发环境搭建/
		http://www.open3d.org/docs/getting_started.html

#workon facecourse-py2  //enter virtual environment
#deactivate  //quit virtual environment



then for pybind11:
	cd pybind11/build/
	make -j
	sudo make install



build source then get linemodLevelup_pybind
copy the linemodLevelup.cpp to the src
sudo python setup.py install(make sure has installed required packages)

train:different-object radius view


--------------------------------------------------------------
--------------------------------------------------------------
--------------------------------------------------------------

ALL steps:
copy patch_linemod pybind11 opencv3.4.6  open3d to source  


install pybind:
cd pybind11/
(sudo apt install python-dev python3-dev )
(sudo apt install cmake)
sudo pip3 install pytest
mv build build.bk
sudo mkdir build
cd build
sudo cmake ..
//cmake --build . --config Release --target check
sudo make install



install open3d(http://www.open3d.org/docs/compilation.html#ubuntu)
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
sudo make install-pip-package (to make sure there are files in /usr/local/include,if not step to sudo pip3 install open3d......)
cd Open3d/build/lib/python_package/pip_package
sudo pip3 install open3d-0.5.0.0-cp35m-linux_x86_64.whl (for python2 then can get lib in python3.5_dist-packages)

sudo make install

test
python3 
import open3d


install opencv3.4.6:
(https://blog.csdn.net/echoamor/article/details/83022352) -->python3 instead python when install the lib like python3-dev instead python-dev
then in build:

sudo make install
sudo sh -c 'echo "/usr/local/lib" >> /etc/ld.so.conf.d/opencv.conf'
sudo ldconfig

install lib for patchlinemod:

sudo pip3 install:
scipy
matplotlib
opencv-python
pypng
ruamel.yaml
Cython
glumpy
pyopengl


exchange the source(lib include)to usr/local/ lib and include 


cd patch_linemod (if change levelup.cpp,should run these steps bleow)
mkdir build (if change ,delete build and remkdir)
cd build/		(or sudo rm -rf * to delete the build)
cmake ..
make
cd patch_linemod/linemodlevelup
sudo python3 setup.py install (then get linemodlevelup_pybind)

sudo python3 patch_linemod_test.py
(set bash:
gedit run.sh in linemodlevelup

sudo rm -rf /home/casia/patch_linemod/linemodLevelup/build/*
cd /home/casia/patch_linemod/linemodLevelup/build/
sudo cmake ..
sudo make
cd /home/casia/patch_linemod/linemodLevelup/
sudo python3 setup.py install
cd /home/casia/patch_linemod/
sudo python3 patch_linemod_test.py

use:
sudo ./run.sh 
)
-----------------------
evaluate:
cd tools/
sudo python3 eval_calc_errors.py   
//Calculating error: vsd, patch-linemod, hinterstoisser,2(scenes total 15 or 3), 72, 9
sudo python3 eval_loc.py 
//calculating matches scores recalls

cd doumanoglou/
sudo unzip test_gt_stats.zip

results are saved to eval/

sudo g++ test.cpp -o test
./test


-------------------------------------
install Matlab2016:
copy src to home
https://blog.csdn.net/hitzijiyingcai/article/details/81989031
sudo mount -t auto -o loop matlab/R2016b_glnxa64_dvd1.iso matlab/

when eject,need to remove the disk(before),then sudo mount...

sudo gedit /usr/share/applications/Matlab2016b.desktop
(https://blog.csdn.net/qq_36982160/article/details/78397514)

Use: cd /usr/local/MATLAB/R2016b/bin  sudo ./matlab

----sublime tips
press the items (needed to replace) alt+F3 and input the items(replaced) ->an awful lot of replace
--------


install t-SNE:
git clone https://github.com/lvdmaaten/bhtsne.git
cd bhtsne
g++ sptree.cpp tsne.cpp tsne_main.cpp -o bh_tsne -O2

OR just copy the files(changed) to linemodlevelup and the make









