/* Module: vidcap30.exe
   Function: FUN_0054cd70
   Address: 0054cd70
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054cd70(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 local_8 [2];
  undefined1 local_6 [2];
  undefined1 local_4 [4];
  
  if (param_5 == 3) {
    if ((0 < param_4) && (param_4 <= (int)(uint)*(ushort *)(param_1 + 0x110))) {
      FUN_0054c3e0(param_1,&DAT_005b8a24,param_2,param_4);
      return;
    }
    FUN_00549570(param_1,"Invalid number of transparent colors specified");
    return;
  }
  if (param_5 == 0) {
    FUN_0054c3c0(local_8,*(undefined2 *)(param_3 + 7));
    FUN_0054c3e0(param_1,&DAT_005b8a24,local_8,2);
    return;
  }
  if (param_5 == 2) {
    FUN_0054c3c0(local_8,*(undefined2 *)(param_3 + 1));
    FUN_0054c3c0(local_6,*(undefined2 *)(param_3 + 3));
    FUN_0054c3c0(local_4,*(undefined2 *)(param_3 + 5));
    FUN_0054c3e0(param_1,&DAT_005b8a24,local_8,6);
    return;
  }
  FUN_00549570(param_1,"Can\'t write tRNS with an alpha channel");
  return;
}


