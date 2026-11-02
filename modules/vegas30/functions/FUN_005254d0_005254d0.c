/* Module: vegas30.exe
   Function: FUN_005254d0
   Address: 005254d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005254d0(undefined4 param_1,int param_2,LPCSTR param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  CHAR local_10c [268];
  
  if (param_2 != 0) {
    iVar1 = FUN_00508b80(param_2);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        uVar2 = FUN_00508c00(param_2,iVar4);
        FUN_00508ba0(uVar2,&local_11c);
        iVar3 = lstrcmpiA(local_10c,param_3);
        if (iVar3 == 0) {
          if (param_4 != (undefined4 *)0x0) {
            *param_4 = local_11c;
            param_4[1] = local_118;
            param_4[2] = local_114;
            param_4[3] = local_110;
          }
          return 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return 1;
}


