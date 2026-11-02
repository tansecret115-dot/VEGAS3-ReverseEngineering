/* Module: sfmarket2.dll
   Function: FUN_00428e00
   Address: 00428e00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00428e00(int param_1,uint param_2,int param_3,LPSTR param_4)

{
  int iVar1;
  uint uVar2;
  LPCSTR pCVar3;
  
  if (param_1 == -1) {
    param_1 = DAT_004aaebc;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = (int)param_2 >> 0x1f;
  if (param_3 == 1) {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    pCVar3 = "S%d";
  }
  else if (param_3 == 3) {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    pCVar3 = "B%d";
  }
  else if (param_3 == 4) {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    pCVar3 = "%d";
  }
  else {
    iVar1 = (param_2 ^ uVar2) - uVar2;
    pCVar3 = "Z%d";
  }
  wsprintfA(param_4,pCVar3,iVar1);
  if (-1 < (int)param_2) {
    return *(undefined4 *)(param_1 + 0x20c);
  }
  return *(undefined4 *)(param_1 + 0x104);
}


