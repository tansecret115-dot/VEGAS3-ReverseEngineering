/* Module: vegas30.exe
   Function: FUN_005fd510
   Address: 005fd510
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005fd510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  FUN_00429130(param_9,param_1,param_2,param_5,param_6,param_7,param_8);
  Transport_SeekPreview
            (CONCAT44(param_2,param_1),CONCAT44(param_4,param_3),CONCAT44(param_6,param_5),
             CONCAT44(param_8,param_7),param_9);
  return;
}


