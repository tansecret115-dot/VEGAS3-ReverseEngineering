/* Module: vidcap30.exe
   Function: FUN_0055fd40
   Address: 0055fd40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0055fd40(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  undefined4 unaff_retaddr;
  int in_stack_00000014;
  undefined4 uStack_10;
  
  uStack_10 = 4;
  iVar1 = (**(code **)(in_stack_00000014 + 0x20))(*(undefined4 *)(in_stack_00000014 + 0x28),0x13);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_0055fde0(unaff_EBX,0x13,0x13,0,0,unaff_retaddr,0,param_1,&uStack_10,iVar1);
  if (iVar2 == -3) {
    *(char **)(in_stack_00000014 + 0x18) = "oversubscribed dynamic bit lengths tree";
    (**(code **)(in_stack_00000014 + 0x24))(*(undefined4 *)(in_stack_00000014 + 0x28),iVar1);
    return -3;
  }
  if ((iVar2 == -5) || (iRam00000000 == 0)) {
    *(char **)(in_stack_00000014 + 0x18) = "incomplete dynamic bit lengths tree";
    iVar2 = -3;
  }
  (**(code **)(in_stack_00000014 + 0x24))(*(undefined4 *)(in_stack_00000014 + 0x28),iVar1);
  return iVar2;
}


