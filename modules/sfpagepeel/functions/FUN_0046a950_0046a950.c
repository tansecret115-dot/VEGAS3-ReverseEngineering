/* Module: sfpagepeel.dll
   Function: FUN_0046a950
   Address: 0046a950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_0046a950(void *this,int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00469320(param_1,0xc,1);
  *(uint *)((int)this + 4) = uVar1;
  uVar1 = FUN_00469320(param_1,0xd,0x1d);
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = FUN_00469320(param_1,0x2a,10);
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = FUN_00469320(param_1,0x34,0xf);
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = FUN_00469320(param_1,0x43,3);
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = FUN_00469320(param_1,0x46,1);
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = FUN_00469320(param_1,0x47,1);
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = FUN_00469320(param_1,0x48,1);
  *(uint *)((int)this + 0x20) = uVar1;
  uVar1 = FUN_00469320(param_1,0x49,0x10);
  *(uint *)((int)this + 0x24) = uVar1;
  uVar1 = FUN_00469320(param_1,0x59,7);
  *(uint *)((int)this + 0x28) = uVar1;
  return;
}


