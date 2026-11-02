/* Module: vegas30.exe
   Function: FUN_004f19f0
   Address: 004f19f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004f19f0(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 local_4;
  
  local_4 = 0;
  piVar3 = DAT_0064b510;
  iVar1 = (**(code **)*DAT_0064b510)(DAT_0064b510,&DAT_0060f0c8,&local_4);
  if (-1 < iVar1) {
    piVar5 = (int *)0x2712;
    uVar2 = (**(code **)(*piVar3 + 0x18))(piVar3,0x2712,0);
    piVar4 = (int *)0x2713;
    *(undefined4 *)(unaff_ESI + 0x2de8) = uVar2;
    uVar2 = (**(code **)(*piVar5 + 0x18))(piVar5,0x2713,1);
    *(undefined4 *)(unaff_ESI + 0x2e98) = uVar2;
    piVar3 = (int *)0x2714;
    uVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,0x2714,0);
    *(undefined4 *)(unaff_ESI + 0x2e9c) = uVar2;
    *(undefined4 *)(unaff_ESI + 0x2ec4) = 0;
    piVar4 = (int *)0x271a;
    uVar2 = (**(code **)(*piVar3 + 0x18))(piVar3,0x271a,0);
    *(undefined4 *)(unaff_ESI + 0x33a4) = uVar2;
    piVar3 = (int *)0x271b;
    uVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,0x271b,0);
    *(undefined4 *)(unaff_ESI + 0x33a8) = uVar2;
    piVar4 = (int *)0x271c;
    uVar2 = (**(code **)(*piVar3 + 0x18))(piVar3,0x271c,0);
    *(undefined4 *)(unaff_ESI + 0x3500) = uVar2;
    piVar3 = (int *)0x271d;
    uVar2 = (**(code **)(*piVar4 + 0x18))(piVar4,0x271d,0);
    *(undefined4 *)(unaff_ESI + 0x3800) = uVar2;
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return;
}


