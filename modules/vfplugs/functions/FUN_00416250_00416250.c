/* Module: vfplugs.dll
   Function: FUN_00416250
   Address: 00416250
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_00416250(void *this,int *param_1)

{
  undefined4 unaff_ESI;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined4 **)((int)this + 8) = &local_18;
  *(undefined4 *)((int)this + 0xc) = uStack_14;
  *(undefined4 *)((int)this + 0x10) = unaff_ESI;
  *(undefined4 *)((int)this + 0x14) = uStack_10;
  *(undefined4 *)((int)this + 0x18) = local_18;
  *(undefined4 *)((int)this + 0x1c) = uStack_c;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x3f800000;
  return;
}


