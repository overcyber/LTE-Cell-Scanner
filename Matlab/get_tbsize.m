function tbsize = get_tbsize(I_TBS, nRB)
tbsize_table = [16 32 56 88 120 152 176 208 224 256
24 56 88 144 176 208 224 256 328 344
32 72 144 176 208 256 296 328 376 424
40 104 176 208 256 328 392 440 504 568
56 120 208 256 328 408 488 552 632 696
72 144 224 328 424 504 600 680 776 872
328 176 256 392 504 600 712 808 936 1032
104 224 328 472 584 712 840 968 1096 1224
120 256 392 536 680 808 968 1096 1256 1384
136 296 456 616 776 936 1096 1256 1416 1544
144 328 504 680 872 1032 1224 1384 1544 1736
176 376 584 776 1000 1192 1384 1608 1800 2024
208 440 680 904 1128 1352 1608 1800 2024 2280
224 488 744 1000 1256 1544 1800 2024 2280 2536
256 552 840 1128 1416 1736 1992 2280 2600 2856
280 600 904 1224 1544 1800 2152 2472 2728 3112
328 632 968 1288 1608 1928 2280 2600 2984 3240
336 696 1064 1416 1800 2152 2536 2856 3240 3624
376 776 1160 1544 1992 2344 2792 3112 3624 4008
408 840 1288 1736 2152 2600 2984 3496 3880 4264
440 904 1384 1864 2344 2792 3240 3752 4136 4584
488 1000 1480 1992 2472 2984 3496 4008 4584 4968
520 1064 1608 2152 2664 3240 3752 4264 4776 5352
552 1128 1736 2280 2856 3496 4008 4584 5160 5736
584 1192 1800 2408 2984 3624 4264 4968 5544 5992
616 1256 1864 2536 3112 3752 4392 5160 5736 6200
712 1480 2216 2984 3752 4392 5160 5992 6712 7480];

tbsize = tbsize_table(I_TBS+1, nRB);