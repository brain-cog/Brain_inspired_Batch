%filename = websave('mnist_train.mat', 'https://github.com/awni/cs224n-pa4/blob/master/Simple_tSNE/mnist_train.mat?raw=true');
filename = 'mnist_train.mat';
load(filename);
numDims = 2; pcaDims = 50; perplexity = 50; theta = .5; alg = 'svd';
map = fast_tsne(digits', numDims, pcaDims, perplexity, theta, alg);
gscatter(map(:,1), map(:,2), labels');