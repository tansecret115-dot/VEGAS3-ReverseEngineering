/* Module: erv23260.dll
   Function: FUN_637f8cb0
   Address: 637f8cb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall
FUN_637f8cb0(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  bVar1 = *(byte *)((int)param_1 + 0x8d);
  iVar5 = *(byte *)((int)param_1 + 0x8e) + 1;
  *(undefined4 *)((int)this + 0x35c) = 0;
  *(uint *)((int)this + 0x338) = (int)this + (bVar1 + 1) * 0x144 + 0x4c;
  iVar4 = FUN_637f9510(this,param_1);
  uVar3 = param_5;
  if (iVar4 != 0) goto LAB_637f8de0;
  if (*(int *)((int)this + 0x348) == 0) {
    if (*(int *)((int)this + 0x34c) != 0) goto LAB_637f8d50;
    *(undefined4 *)((int)this + 0x340) = *(undefined4 *)((int)this + 0x338);
    *(int *)((int)this + 0x33c) = (int)this + iVar5 * 0x144 + 0x4c;
  }
  else {
    *(undefined4 *)(*(int *)((int)this + 4) + 0x3b0) = 1;
    iVar5 = *(byte *)(*(int *)((int)this + 0x338) + 0x93) + 1;
LAB_637f8d50:
    *(int *)((int)this + 0x340) = (int)this + 0x4c;
    *(int *)((int)this + 0x33c) = (int)this + iVar5 * 0x144 + 0x4c;
  }
  *param_2 = *(undefined4 *)((int)this + 0x338);
  *param_3 = *(undefined4 *)((int)this + 0x33c);
  *param_4 = *(undefined4 *)((int)this + 0x340);
  if (*(int *)((int)this + 0x34c) == 0) {
    iVar4 = *(int *)((int)this + 0x344);
  }
  else {
    iVar4 = FUN_637f8600(this,1,piVar2,param_5);
    if (iVar4 != 0) goto LAB_637f8de0;
    FUN_637f9810(this,1,&local_18,&local_14,&local_10,&local_c,&local_8,&param_1);
    iVar4 = 3;
  }
  FUN_637f8600(this,iVar4,piVar2,uVar3);
LAB_637f8de0:
  *(undefined4 *)((int)this + 0x32c) = 0;
  *(undefined4 *)((int)this + 0x330) = 0;
  *(undefined4 *)((int)this + 0x334) = 0;
  return;
}


