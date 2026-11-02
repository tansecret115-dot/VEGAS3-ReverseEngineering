/* Module: vidcap30.exe
   Function: FUN_0054cf50
   Address: 0054cf50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0054cf50(int param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  iVar2 = param_3;
  iVar1 = param_1;
  if (param_3 <= (int)(uint)*(ushort *)(param_1 + 0x110)) {
    FUN_0054c410(param_1,&DAT_005b89e4,param_3 * 2);
    puVar3 = param_2;
    if (0 < iVar2) {
      do {
        FUN_0054c3c0(&param_1,*puVar3);
        FUN_0054c460(iVar1,&param_1,2);
        iVar2 = iVar2 + -1;
        puVar3 = puVar3 + 1;
      } while (iVar2 != 0);
    }
    FUN_0054c490(iVar1);
    return;
  }
  FUN_00549570(param_1,"Invalid number of histogram entries specified");
  return;
}


