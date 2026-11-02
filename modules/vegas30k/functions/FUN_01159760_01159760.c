/* Module: vegas30k.dll
   Function: FUN_01159760
   Address: 01159760
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01159760(int param_1,byte *param_2,uint param_3)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_3 != 3) {
    if ((param_3 & 2) != 0) {
      FUN_01158cb0(local_8,*(undefined2 *)(param_2 + 1));
      FUN_01158cb0(local_6,*(undefined2 *)(param_2 + 3));
      FUN_01158cb0(local_4,*(undefined2 *)(param_2 + 5));
      FUN_01158cd0(param_1,&DAT_01206fdc,local_8,6);
      return;
    }
    FUN_01158cb0(local_8,*(undefined2 *)(param_2 + 7));
    FUN_01158cd0(param_1,&DAT_01206fdc,local_8,2);
    return;
  }
  local_8[0] = *param_2;
  if (*(ushort *)(param_1 + 0x110) < (ushort)local_8[0]) {
    FUN_01155fb0(param_1,"Invalid background palette index");
    return;
  }
  FUN_01158cd0(param_1,&DAT_01206fdc,local_8,1);
  return;
}


