/* Module: encn3260.dll
   Function: CreateAndUseContext
   Address: 664817e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 CreateAndUseContext(int *param_1)

{
  void *this;
  undefined4 *puVar1;
  undefined4 local_8;
  
                    /* 0x17e0  14  CreateAndUseContext */
  this = operator_new(0xb2);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66481820(this,param_1);
  }
  (**(code **)*puVar1)(puVar1,&DAT_664dc5d0,&local_8);
  return local_8;
}


