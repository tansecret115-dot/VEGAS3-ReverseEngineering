/* Module: vegas30.exe
   Function: FUN_0050a400
   Address: 0050a400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a400(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_238 [16];
  CHAR local_228 [268];
  undefined1 local_11c [16];
  CHAR local_10c [268];
  
  FUN_00508ba0(param_1,local_11c);
  iVar1 = FUN_00508b80(param_2);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = FUN_00508c00(param_2,iVar4);
      FUN_00508ba0(uVar2,local_238);
      iVar3 = lstrcmpiA(local_10c,local_228);
      if (iVar3 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return 0;
}


