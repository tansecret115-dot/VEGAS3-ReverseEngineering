/* Module: vegas30.exe
   Function: FUN_004294e0
   Address: 004294e0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_004294e0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int local_4;
  
  bVar4 = false;
  if ((DAT_0064762c != 0) && (iVar1 = *(int *)(DAT_0064762c + 0x80), iVar1 != 0)) {
    uVar6 = 0;
    uVar2 = FUN_005ba4b0(*(undefined4 *)(iVar1 + 0x80),0);
    iVar3 = FUN_005b9fc0(*(undefined4 *)(iVar1 + 0x80),uVar2,uVar6);
    piVar7 = &local_4;
    uVar2 = 5;
    local_4 = 0;
    uVar5 = ftol(5,piVar7);
    FUN_005a58d0(iVar3 + 0x108,uVar5,uVar2,piVar7);
    bVar4 = local_4 == 0;
    FUN_005ba030(*(undefined4 *)(iVar1 + 0x80),iVar3,0,1);
  }
  return bVar4;
}


