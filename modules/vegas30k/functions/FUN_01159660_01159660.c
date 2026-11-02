/* Module: vegas30k.dll
   Function: FUN_01159660
   Address: 01159660
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159660(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_5 == 3) {
    if ((0 < param_4) && (param_4 <= (int)(uint)*(ushort *)(param_1 + 0x110))) {
      FUN_01158cd0(param_1,&DAT_01207034,param_2,param_4);
      return;
    }
    FUN_01155fb0(param_1,"Invalid number of transparent colors specified");
    return;
  }
  if (param_5 == 0) {
    FUN_01158cb0(local_8,*(undefined2 *)(param_3 + 7));
    FUN_01158cd0(param_1,&DAT_01207034,local_8,2);
    return;
  }
  if (param_5 == 2) {
    FUN_01158cb0(local_8,*(undefined2 *)(param_3 + 1));
    FUN_01158cb0(local_6,*(undefined2 *)(param_3 + 3));
    FUN_01158cb0(local_4,*(undefined2 *)(param_3 + 5));
    FUN_01158cd0(param_1,&DAT_01207034,local_8,6);
    return;
  }
  FUN_01155fb0(param_1,"Can\'t write tRNS with an alpha channel");
  return;
}


