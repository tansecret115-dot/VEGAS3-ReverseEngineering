/* Module: vidcap30.exe
   Function: FUN_004502f0
   Address: 004502f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004502f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x130);
  iVar1 = *(int *)(param_1 + 0x14);
  FUN_0042f490(iVar3,DAT_005ba2a4);
  if (-1 < iVar1) {
    iVar2 = FUN_0042f6b0(iVar3);
    if (iVar2 != 0) {
      FUN_0042e600(iVar2,0);
    }
    if ((*(int *)(iVar3 + 0x1c8) == 0) && (((byte)DAT_005ba4b4 & 0x10) == 0)) {
      FUN_00417ac0(DAT_005ba4bc,iVar3 + 0xbc,&DAT_005bb848);
    }
    FUN_0042f070(iVar3,0);
    FUN_00441a20();
    iVar3 = FUN_00443690(iVar3,*(undefined4 *)(iVar3 + 0x51c));
    if ((iVar3 != 0) && (*(LPCSTR *)(iVar3 + 0xc) != (LPCSTR)0x0)) {
      iVar2 = lstrcmpiA(*(LPCSTR *)(iVar3 + 0xc),&DAT_005bb57c);
      if (iVar2 != 0) {
        lstrcpynA(&DAT_005bb680,*(LPCSTR *)(iVar3 + 0xc),0x104);
        DAT_005bb783 = 0;
      }
    }
    FUN_00411120(1);
    return iVar1;
  }
  FUN_0042e600(iVar3,0);
  *(undefined4 *)(param_1 + 0x130) = 0;
  return iVar1;
}


