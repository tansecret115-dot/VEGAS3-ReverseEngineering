/* Module: encn3260.dll
   Function: FUN_66492fd0
   Address: 66492fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66492fd0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_e;
  undefined4 local_a;
  
  iVar1 = *param_1;
  if ((iVar1 == 0) || (*param_2 == 0)) {
    iVar2 = 0;
  }
  else {
    local_e = (uint)*(byte *)(iVar1 + 3) << 0x18 | (uint)*(byte *)(iVar1 + 4) << 0x10 |
              (uint)*(byte *)(iVar1 + 5) << 8 | (uint)*(byte *)(iVar1 + 6);
    local_a = (uint)*(byte *)(iVar1 + 7) << 0x18 | (uint)*(byte *)(iVar1 + 8) << 0x10 |
              (uint)*(byte *)(iVar1 + 9) << 8 | (uint)*(byte *)(iVar1 + 10);
    iVar2 = iVar1 + 0xb;
  }
  if (iVar2 == 0) {
    *param_2 = 0;
    return 0x80040009;
  }
  *param_2 = (iVar1 - iVar2) + *param_2;
  *param_1 = iVar2;
  uVar3 = (**(code **)(**(int **)((int)this + 0x14) + 0x1c))
                    (*(int **)((int)this + 0x14),0,*(undefined4 *)((int)this + 0x20),local_e,local_a
                    );
  return uVar3;
}


