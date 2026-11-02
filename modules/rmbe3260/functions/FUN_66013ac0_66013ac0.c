/* Module: rmbe3260.dll
   Function: FUN_66013ac0
   Address: 66013ac0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_66013ac0(void *this,int param_1)

{
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x18);
  return 0;
}


