/* Module: stl2plg.dll
   Function: FUN_00401e10
   Address: 00401e10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00401e10(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(int *)((int)this + 0x3a8) == 0) {
    *param_1 = 0;
    return -0x7fffbffb;
  }
  uVar2 = *(undefined4 *)(*(int *)((int)this + 0x3a8) + 0x58);
  puVar1 = (undefined4 *)((int)this + 0x3b0);
  puVar4 = (undefined4 *)0x0;
  iVar3 = (**(code **)(**(int **)((int)this + 0x3b4) + 0x14))
                    (*(int **)((int)this + 0x3b4),0,0,0,uVar2,0,0,puVar1);
  if (iVar3 == 1) {
    iVar3 = (**(code **)(*(int *)this + 0x6c))(*puVar1,uVar2);
    if (-1 < iVar3) goto LAB_00401e90;
    (**(code **)(**(int **)((int)this + 0x3b4) + 0x18))
              (*(int **)((int)this + 0x3b4),0xffffffff,0xffffffff,0,0,uVar2,*puVar1);
  }
  else if (-1 < iVar3) goto LAB_00401e90;
  *puVar1 = 0;
LAB_00401e90:
  *puVar4 = *puVar1;
  return iVar3;
}


