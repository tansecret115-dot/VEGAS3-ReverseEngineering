/* Module: vegas30.exe
   Function: FUN_00525570
   Address: 00525570
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00525570(undefined4 param_1,undefined4 param_2,LPCSTR param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char local_4 [4];
  
  builtin_strncpy(local_4,"\\\n:;",4);
  iVar1 = lstrlenA(param_3);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = 0;
      do {
        if (local_4[iVar3] == param_3[iVar4]) {
          return 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uVar2 = FUN_005254d0(param_1,param_2,param_3,0);
  return uVar2;
}


