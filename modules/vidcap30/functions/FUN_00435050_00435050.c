/* Module: vidcap30.exe
   Function: FUN_00435050
   Address: 00435050
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00435050(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_005bb838;
  uVar4 = 0;
  if (param_2 == 0) {
    if ((*(byte *)(param_1 + 0x1c34) & 8) != 0) {
      if ((DAT_005bb4b0 != 0) && (iVar3 = FUN_00434fe0(param_1), iVar3 != 0)) {
        uVar2 = FUN_0042f0a0(uVar2);
        switch(uVar2) {
        case 0:
        case 2:
        case 3:
          uVar4 = FUN_00422890(param_1 + 0xa48,"No Capture Device",0);
          *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffff7;
          break;
        case 1:
          FUN_00422890(param_1 + 0xd8,&DAT_00586c70,0);
          *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) & 0xfffffff7;
          uVar4 = FUN_00422890(param_1 + 0xa48,"No Capture Device",0);
          *(undefined4 *)(param_1 + 0x1c38) = uVar2;
          return uVar4;
        }
        *(undefined4 *)(param_1 + 0x1c38) = uVar2;
        return uVar4;
      }
      return 0x80040964;
    }
  }
  else if ((*(byte *)(param_1 + 0x1c34) & 8) == 0) {
    if ((DAT_005bb574 == 0) && (*(int *)(param_1 + 0x1c38) == 1)) {
      iVar3 = param_1 + 0xa48;
      iVar1 = FUN_00422890(iVar3,param_1 + 0x17ac,0);
      if ((iVar1 < 0) ||
         ((iVar1 = FUN_0043e7f0(param_1,iVar3), iVar1 < 0 ||
          (iVar1 = FUN_0042b180(iVar3,1), iVar1 < 0)))) {
        FUN_00422890(iVar3,"No Capture Device",0);
      }
      FUN_0042f070(uVar2,0);
    }
    uVar2 = FUN_0043b8d0(param_1,*(undefined4 *)(param_1 + 0x1c38),1);
    *(uint *)(param_1 + 0x1c34) = *(uint *)(param_1 + 0x1c34) | 8;
    return uVar2;
  }
  return 1;
}


