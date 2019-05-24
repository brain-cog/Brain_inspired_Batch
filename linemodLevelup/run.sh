sudo rm -rf /home/casia/patch_linemod/linemodLevelup/build/*
cd /home/casia/patch_linemod/linemodLevelup/build/
sudo cmake ..
sudo make
cd /home/casia/patch_linemod/linemodLevelup/
sudo python3 setup.py install
cd /home/casia/patch_linemod/
sudo python3 patch_linemod_test.py

