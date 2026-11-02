/* Module: Setup.exe
   Function: FUN_00425620
   Address: 00425620
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425620(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *unaff_EBX;
  uint *unaff_retaddr;
  int in_stack_00000014;
  uint uStack_10;
  
  uStack_10 = 4;
  puVar1 = (uint *)(**(code **)(in_stack_00000014 + 0x20))
                             (*(undefined4 *)(in_stack_00000014 + 0x28),0x13);
  if (puVar1 == (uint *)0x0) {
    return -4;
  }
  iVar2 = FUN_004256c0(unaff_EBX,0x13,0x13,0,0,unaff_retaddr,(uint *)0x0,param_1,&uStack_10,puVar1);
  if (iVar2 == -3) {
    *(char **)(in_stack_00000014 + 0x18) = "oversubscribed dynamic bit lengths tree";
    (**(code **)(in_stack_00000014 + 0x24))(*(undefined4 *)(in_stack_00000014 + 0x28),puVar1);
    return -3;
  }
  if ((iVar2 == -5) || (iRam00000000 == 0)) {
    *(char **)(in_stack_00000014 + 0x18) = "incomplete dynamic bit lengths tree";
    iVar2 = -3;
  }
  (**(code **)(in_stack_00000014 + 0x24))(*(undefined4 *)(in_stack_00000014 + 0x28),puVar1);
  return iVar2;
}


