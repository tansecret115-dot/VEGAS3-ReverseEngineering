/* Module: vegas30.exe
   Function: FUN_00524400
   Address: 00524400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00524400(undefined4 param_1,undefined4 *param_2,LPCSTR param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_11c [16];
  CHAR local_10c [268];
  
  iVar1 = FUN_00508b80(param_1);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00508c00(param_1,iVar4);
      FUN_00508ba0(uVar2,local_11c);
      iVar3 = lstrcmpiA(local_10c,param_3);
      if (iVar3 == 0) {
        *param_2 = uVar2;
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *param_2 = 0;
  return 0x80070057;
}


