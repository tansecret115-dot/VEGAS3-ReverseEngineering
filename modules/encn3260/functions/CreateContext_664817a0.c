/* Module: encn3260.dll
   Function: CreateContext
   Address: 664817a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 CreateContext(void)

{
  void *this;
  undefined4 *puVar1;
  undefined4 local_8;
  
                    /* 0x17a0  15  CreateContext */
  this = operator_new(0xb2);
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_66481820(this,(int *)0x0);
  }
  (**(code **)*puVar1)(puVar1,&DAT_664dc5d0,&local_8);
  return local_8;
}


