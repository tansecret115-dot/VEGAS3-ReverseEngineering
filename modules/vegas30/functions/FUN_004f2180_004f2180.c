/* Module: vegas30.exe
   Function: FUN_004f2180
   Address: 004f2180
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f2180(void)

{
  int iVar1;
  undefined4 in_stack_00002de4;
  undefined4 in_stack_00002e94;
  undefined4 in_stack_00002e98;
  undefined4 in_stack_000033a0;
  undefined4 in_stack_000033a4;
  undefined4 in_stack_000034fc;
  undefined4 in_stack_000037fc;
  int *piVar2;
  int *piVar3;
  
  piVar2 = DAT_0064b510;
  iVar1 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f0c8);
  if (-1 < iVar1) {
    piVar3 = (int *)0x2712;
    (**(code **)(*piVar2 + 0x28))(piVar2,0x2712,in_stack_00002de4);
    piVar2 = (int *)0x2713;
    (**(code **)(*piVar3 + 0x28))(piVar3,0x2713,in_stack_00002e94);
    piVar3 = (int *)0x2714;
    (**(code **)(*piVar2 + 0x28))(piVar2,0x2714,in_stack_00002e98);
    piVar2 = (int *)0x2715;
    (**(code **)(*piVar3 + 0x28))(piVar3,0x2715,0);
    piVar3 = (int *)0x271a;
    (**(code **)(*piVar2 + 0x28))(piVar2,0x271a,in_stack_000033a0);
    piVar2 = (int *)0x271b;
    (**(code **)(*piVar3 + 0x28))(piVar3,0x271b,in_stack_000033a4);
    piVar3 = (int *)0x271c;
    (**(code **)(*piVar2 + 0x28))(piVar2,0x271c,in_stack_000034fc);
    piVar2 = (int *)0x271d;
    (**(code **)(*piVar3 + 0x28))(piVar3,0x271d,in_stack_000037fc);
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}


