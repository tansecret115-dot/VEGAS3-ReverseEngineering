/* Module: vidcap30.exe
   Function: FUN_0054ce70
   Address: 0054ce70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054ce70(int param_1,byte *param_2,uint param_3)

{
  byte local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_3 != 3) {
    if ((param_3 & 2) != 0) {
      FUN_0054c3c0(local_8,*(undefined2 *)(param_2 + 1));
      FUN_0054c3c0(local_6,*(undefined2 *)(param_2 + 3));
      FUN_0054c3c0(local_4,*(undefined2 *)(param_2 + 5));
      FUN_0054c3e0(param_1,&DAT_005b89cc,local_8,6);
      return;
    }
    FUN_0054c3c0(local_8,*(undefined2 *)(param_2 + 7));
    FUN_0054c3e0(param_1,&DAT_005b89cc,local_8,2);
    return;
  }
  local_8[0] = *param_2;
  if (*(ushort *)(param_1 + 0x110) < (ushort)local_8[0]) {
    FUN_00549570(param_1,"Invalid background palette index");
    return;
  }
  FUN_0054c3e0(param_1,&DAT_005b89cc,local_8,1);
  return;
}


