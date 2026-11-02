/* Module: vegas30.exe
   Function: FUN_004d6070
   Address: 004d6070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_004d6070(int *param_1,HDC param_2,RECT *param_3)

{
  int *piVar1;
  HDC hdc;
  HGDIOBJ h;
  BOOL BVar2;
  HRGN hrgn;
  int *piVar3;
  tagRECT local_10;
  
  hdc = param_2;
  if ((0 < param_1[10]) && (0 < param_1[0xb])) {
    h = (HGDIOBJ)_SfGetUIFont_4(100);
    BVar2 = IntersectRect(&local_10,(RECT *)(param_1 + 0x83),param_3);
    if (BVar2 != 0) {
      hrgn = CreateRectRgnIndirect((RECT *)(param_1 + 0x83));
      SelectClipRgn(param_2,hrgn);
      DeleteObject(hrgn);
      (**(code **)(*param_1 + 0x18))(param_1,param_2,&local_10);
      SelectClipRgn(param_2,(HRGN)0x0);
    }
    piVar3 = param_1 + 0xe;
    param_2 = (HDC)0x3;
    do {
      piVar1 = (int *)*piVar3;
      if (0 < piVar1[7]) {
        BVar2 = IntersectRect(&local_10,(RECT *)(piVar1 + 2),param_3);
        if (BVar2 != 0) {
          (**(code **)(*piVar1 + 0x18))(param_1,hdc,&local_10);
        }
      }
      piVar3 = piVar3 + 1;
      param_2 = (HDC)((int)param_2 + -1);
    } while (param_2 != (HDC)0x0);
    SelectObject(hdc,h);
  }
  return;
}


