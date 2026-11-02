/* Module: sfppack1.dll
   Function: FUN_5cdd3b20
   Address: 5cdd3b20
   Source: Ghidra pseudocode (Stage 10 batch) */


void * __thiscall FUN_5cdd3b20(void *this,undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  
  FUN_5ce02202(this,param_1,param_2,&DAT_5ce149a0);
  FUN_5cdd68a0((undefined4 *)((int)this + 0xa0));
  puVar1 = (undefined4 *)((int)this + 0x328);
  *puVar1 = &PTR_LAB_5ce12bc0;
  *(undefined ***)((int)this + 0x32c) = &PTR_LAB_5ce13a0c;
  *(undefined ***)this = &PTR_LAB_5ce14b18;
  *(undefined ***)((int)this + 0xc) = &PTR_FUN_5ce14adc;
  *(undefined ***)((int)this + 0x10) = &PTR_LAB_5ce14ac8;
  *(undefined4 *)((int)this + 0xa0) = &PTR_LAB_5ce14a3c;
  *(undefined ***)((int)this + 800) = &PTR_LAB_5ce14a2c;
  *(undefined ***)((int)this + 0x324) = &PTR_LAB_5ce14a0c;
  *puVar1 = &PTR_LAB_5ce149f4;
  *(undefined ***)((int)this + 0x32c) = &PTR_LAB_5ce149d0;
  DAT_5ce2335c = DAT_5ce2335c + 1;
  *(int *)((int)this + 0x330) = DAT_5ce2335c;
  FUN_5cdd4580((int)puVar1,0);
  return this;
}


