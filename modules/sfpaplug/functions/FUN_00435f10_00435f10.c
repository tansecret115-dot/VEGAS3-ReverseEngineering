/* Module: sfpaplug.dll
   Function: FUN_00435f10
   Address: 00435f10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00435f10(void *this,uint param_1,short *param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int *param_7)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  int iVar6;
  uint local_c;
  int local_8;
  int *local_4;
  
  piVar1 = (int *)((int)this + 0x4c);
  iVar6 = 0;
  local_8 = 0;
  local_4 = piVar1;
  if ((*(int *)((int)this + 0x4c) == 0) && (FUN_0042baa0(piVar1,4,-1,-1,0x80000000), *piVar1 == 0))
  {
    FUN_0042b9d0(param_7);
    return 0x80004005;
  }
  local_c = 0;
  FUN_00418220((int *)&local_c);
  piVar1 = param_7;
  if (0 < *param_7) {
    do {
      piVar2 = *(int **)(piVar1[2] + iVar6 * 4);
      if ((piVar2 != (int *)0x0) &&
         (((piVar2[0xb8] = 2, piVar2[0xd0] != 2 ||
           (param_7 = (int *)(uint)((uint)piVar2[0x90] < local_c), param_7 == (int *)0x0)) &&
          ((*(byte *)(piVar2 + 0x8e) & 0x40) != 0)))) {
        iVar4 = FUN_00434060((short *)(piVar2 + 1),param_2,param_3,param_1 & 1);
        if (((iVar4 != 0) && (uVar5 = FUN_00434510(0x40,piVar2[0x8f],param_4), uVar5 != 0)) &&
           ((piVar2[0x93] != 0 ||
            (bVar3 = FUN_00434540(piVar1,iVar6,piVar2 + 1,0x40,0), CONCAT31(extraout_var,bVar3) == 0
            )))) {
          piVar2[0xb8] = 0;
          param_7 = piVar2;
          FUN_0042a470((int *)*local_4,-1,(int *)&param_7,1);
          piVar2[0xb6] = local_8;
          local_8 = local_8 + 1;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *piVar1);
  }
  return 0;
}


