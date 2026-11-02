/* Module: vegas30.exe
   Function: FUN_0045aaf0
   Address: 0045aaf0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0045aaf0(HWND param_1,int param_2)

{
  code *pcVar1;
  HGDIOBJ ho;
  int iVar2;
  undefined4 *puVar3;
  
  SetWindowLongA(param_1,-0x15,0);
  iVar2 = 0xf;
  *(undefined4 *)(param_2 + 0x210) = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  puVar3 = (undefined4 *)(param_2 + 0x54);
  do {
    pcVar1 = (code *)**(undefined4 **)*puVar3;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_2,(undefined4 *)*puVar3,1);
    }
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pcVar1 = *(code **)**(undefined4 **)(param_2 + 0x50);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_2,*(undefined4 **)(param_2 + 0x50),1);
  }
  if (*(HDC *)(param_2 + 0xc58) != (HDC)0x0) {
    ho = SelectObject(*(HDC *)(param_2 + 0xc58),*(HGDIOBJ *)(param_2 + 0xc5c));
    DeleteObject(ho);
    DeleteDC(*(HDC *)(param_2 + 0xc58));
    *(undefined4 *)(param_2 + 0xc58) = 0;
    *(undefined4 *)(param_2 + 0xc5c) = 0;
  }
  return;
}


