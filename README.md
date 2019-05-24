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

### (3) library to be installed (with source cmake file)

install opencv3 with contrib rgbd module  
install pybind11  
install open3d(for icp)

```sh
pip3 install -r requirements.txt
```











### (4) C++ and Python packages install steps:

```sh
cd linemodLevelup/
mkdir build
cd build
cmake ..
make
cd linemodLevelup/
python setup.py install #(get the linemodlevelup_pybind in import python)
python patch_linemod_test.py

```

### (5) how to evaluate

patch_linemod_test.py, 57-66, select dataset & mode, train & test  
tools/eval_calc_errors.py, 19-27, select dataset, run  
tools/eval_loc.py, 180-186, select dataset, run  
Results are saved to top_level_folder/eval  

[Chinese blog](https://zhuanlan.zhihu.com/p/45538349)
