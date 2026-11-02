/* Module: vegas30.exe
   Function: FUN_00423300
   Address: 00423300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00423300(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  LPARAM LVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  
  iVar1 = *param_1;
  uVar2 = *(undefined4 *)(iVar1 + 0x80);
  if (iVar1 != 0) {
    bVar3 = false;
    iVar4 = FUN_00429580(1);
    if ((iVar4 != 0x20) && (iVar4 != 0x40)) {
      bVar3 = true;
      SendMessageA((HWND)param_1[0x16],0x411,20000,8);
    }
    LVar5 = 4;
    if (DAT_0064a4a4 != 0) {
      LVar5 = 5;
    }
    SendMessageA((HWND)param_1[8],0x411,0xc50f,LVar5);
    uVar6 = FUN_005ba4b0(uVar2,0);
    piVar7 = (int *)FUN_005ba950(uVar2,uVar6,0);
    iVar4 = 0;
    if (piVar7 != (int *)0x0) {
      iVar4 = *piVar7;
    }
    SendMessageA((HWND)param_1[8],0x42b,0x621,(iVar4 != 0) + 0x44);
    LVar5 = 4;
    if (bVar3) {
      LVar5 = 0xc;
    }
    SendMessageA((HWND)param_1[8],0x411,0x621,LVar5);
    iVar4 = FUN_005ba9b0(uVar2,uVar6,0);
    uVar8 = 4;
    if (iVar4 != 0) {
      uVar8 = 5;
    }
    if (bVar3) {
      uVar8 = uVar8 | 8;
    }
    SendMessageA((HWND)param_1[8],0x411,0xc4f6,uVar8);
    uVar8 = 4;
    if (*(int *)(iVar1 + 0x118) != 0) {
      uVar8 = 5;
    }
    if (bVar3) {
      uVar8 = uVar8 | 8;
    }
    SendMessageA((HWND)param_1[0x16],0x411,0xc4f9,uVar8);
    if (DAT_0064a4a4 != 0) {
      SendMessageA((HWND)param_1[0x16],0x411,0x422,0);
      SendMessageA((HWND)param_1[0x16],0x411,0x431,0);
      return;
    }
    SendMessageA((HWND)param_1[0x16],0x411,0x422,4);
    SendMessageA((HWND)param_1[0x16],0x411,0x431,4);
  }
  return;
}


