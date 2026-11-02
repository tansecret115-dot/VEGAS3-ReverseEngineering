/* Module: vegas30.exe
   Function: FUN_00445590
   Address: 00445590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00445590(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined1 *puStack_320;
  undefined1 local_314 [247];
  undefined1 uStack_21d;
  WCHAR aWStack_21c [6];
  undefined1 auStack_210 [528];
  
  if (param_1 == 0) {
    return -0x7fffbffb;
  }
  if ((*(byte *)(param_1 + 0x9c) & 8) == 0) {
    return 0;
  }
  puVar2 = *(undefined1 **)(param_1 + 0xac);
  iVar5 = 0;
  if (puVar2 != (undefined1 *)0x0) {
    switch(*(undefined4 *)(param_1 + 0xa8)) {
    case 1:
      puStack_320 = (undefined1 *)0x0;
      iVar5 = FUN_004ea750(*(undefined4 *)(param_1 + 0x88),puVar2,0x2a);
      return iVar5;
    case 2:
    case 3:
      puStack_320 = (undefined1 *)0x0;
      iVar5 = FUN_004ea250(*(undefined4 *)(param_1 + 0x88),puVar2,0x29);
      return iVar5;
    case 4:
      puStack_320 = (undefined1 *)0x0;
      iVar5 = FUN_004eaad0(*(undefined4 *)(param_1 + 0x88),0,0x24);
      break;
    case 5:
      puStack_320 = local_314;
      iVar5 = (**(code **)(**(int **)(param_1 + 0xb0) + 0x28))(*(int **)(param_1 + 0xb0));
      if (-1 < iVar5) {
        piVar7 = (int *)0x104;
        (**(code **)(*unaff_ESI + 0x34))(unaff_ESI,auStack_210);
        if ((&stack0x00000000 == (undefined1 *)0x21c) || (aWStack_21c[0] != L'\0')) {
          WideCharToMultiByte(0,0,aWStack_21c,-1,(LPSTR)&puStack_320,0x104,(LPCSTR)0x0,(LPBOOL)0x0);
        }
        else if (&stack0x00000000 != (undefined1 *)0x320) {
          puStack_320 = (undefined1 *)((uint)puStack_320 & 0xffffff00);
        }
        uStack_21d = 0;
        pcVar3 = (char *)FUN_005ec620();
        uVar8 = 0;
        iVar5 = -0x7fffbffb;
        if (*pcVar3 != '\0') {
          puVar6 = *(undefined4 **)(pcVar3 + 8);
          iVar5 = -0x7ffb1ff6;
          bVar1 = *(byte *)(puVar6 + 6);
          while ((bVar1 & 2) != 2) {
            iVar4 = lstrcmpiA((LPCSTR)&puStack_320,(LPCSTR)*puVar6);
            if (iVar4 == 0) break;
            if (iVar4 < 0) {
              puVar6 = (undefined4 *)puVar6[4];
            }
            else {
              puVar6 = (undefined4 *)puVar6[5];
            }
            bVar1 = *(byte *)(puVar6 + 6);
          }
          if ((*(byte *)(puVar6 + 6) & 2) != 2) {
            uVar8 = puVar6[1];
            iVar5 = 0;
          }
        }
        if (-1 < iVar5) {
          iVar5 = FUN_004eb0f0(*(undefined4 *)(param_1 + 0x88),0x25,uVar8);
        }
        (**(code **)(*piVar7 + 8))(piVar7);
        return iVar5;
      }
      break;
    case 6:
      puStack_320 = puVar2;
      iVar5 = FUN_004eb0f0(*(undefined4 *)(param_1 + 0x88),0x25);
      return iVar5;
    case 7:
    case 8:
      puStack_320 = (undefined1 *)0x0;
      iVar5 = FUN_004ea750(*(undefined4 *)(param_1 + 0x88),puVar2,2);
      return iVar5;
    }
  }
  return iVar5;
}


