/* Module: vegas30.exe
   Function: FUN_0052de30
   Address: 0052de30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052de30(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  *(undefined4 *)(param_2 + 0x5ac) = 0;
  *(undefined4 *)(param_2 + 0xa18) = 0;
  iVar2 = FUN_0059e0c0(0);
  *(undefined4 *)(iVar1 + 0x5ac) = 0;
  *(undefined4 *)(iVar1 + 0xa18) = 0;
  FUN_005ba670(param_1,0,&param_2,iVar1 + 0x9d8,&local_8,0);
  param_2 = 0x1b;
  _SfVideo_InitBitmapInfo_28(iVar1 + 0x184,0x1b,local_8,local_4,0,0,0);
  _SfVideo_InitBitmapInfo_28(iVar1 + 0x5b0,param_2,local_8,local_4,0,0,0);
  if (param_3 == 0) {
    piVar3 = (int *)FUN_005b87b0(param_1);
    iVar5 = 0;
    if (0 < *piVar3) {
      piVar6 = (int *)piVar3[2];
      do {
        if (((*(byte *)(*piVar6 + 0x12) & 2) == 0) && (*(int *)(*piVar6 + 4) == 3)) {
          *(uint *)(iVar1 + 0x108) = *(uint *)(iVar1 + 0x108) | 2;
          break;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < *piVar3);
    }
    iVar5 = 0;
    *(undefined4 *)(iVar1 + 0x5ac) = 0;
    *(undefined4 *)(iVar1 + 0xa18) = 0;
    if (0 < iVar2) {
      do {
        iVar4 = FUN_005b9f30(param_1,3,iVar5,0);
        if (iVar4 != 0) {
          if (*(int *)(iVar1 + 0xa18) == 0) {
            FUN_005ba670(param_1,iVar5,&param_2,iVar1 + 0x9d8,&local_8,0);
            _SfVideo_InitBitmapInfo_28(iVar1 + 0x184,param_2,local_8,local_4,0,0,0);
            _SfVideo_InitBitmapInfo_28(iVar1 + 0x5b0,param_2,local_8,local_4,0,0,0);
          }
          *(int *)(iVar1 + 0xa18) = *(int *)(iVar1 + 0xa18) + 1;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
  }
  return (-(uint)((*(uint *)(iVar1 + 0x108) & 2) != 0) & 0xfffb1fff) + 0x4e001;
}


