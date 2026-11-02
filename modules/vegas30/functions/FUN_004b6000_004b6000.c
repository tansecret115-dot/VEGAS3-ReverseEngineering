/* Module: vegas30.exe
   Function: FUN_004b6000
   Address: 004b6000
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b6000(HWND param_1,int *param_2)

{
  int iVar1;
  HWND pHVar2;
  HWND hWnd;
  UINT UVar3;
  WPARAM WVar4;
  LPARAM LVar5;
  
  if (*(char *)(*param_2 + 8000) != '\0') {
    LVar5 = 0;
    DAT_0064cb60 = 1;
    WVar4 = 0;
    UVar3 = 0x14e;
    *(undefined1 *)(*param_2 + 8000) = 0;
    pHVar2 = GetDlgItem(param_1,0x48f);
    SendMessageA(pHVar2,UVar3,WVar4,LVar5);
  }
  if (*(int *)(*param_2 + 0x2044) != DAT_006412f4) {
    DAT_0064cb60 = 1;
    *(int *)(*param_2 + 0x2044) = DAT_006412f4;
  }
  if ((*(int *)(*param_2 + 0x2050) != DAT_00641300) || (*(int *)(*param_2 + 0x2054) != DAT_00641304)
     ) {
    DAT_0064cb60 = 1;
    iVar1 = *param_2;
    *(int *)(iVar1 + 0x2050) = DAT_00641300;
    *(int *)(iVar1 + 0x2054) = DAT_00641304;
  }
  if (*(int *)(*param_2 + 0x2058) != DAT_00641308) {
    DAT_0064cb60 = 1;
    *(int *)(*param_2 + 0x2058) = DAT_00641308;
  }
  iVar1 = *param_2;
  if ((*(int *)(iVar1 + 0x2060) != DAT_00641310) || (*(int *)(iVar1 + 0x2064) != DAT_00641314)) {
    *(int *)(iVar1 + 0x2060) = DAT_00641310;
    *(int *)(iVar1 + 0x2064) = DAT_00641314;
    DAT_0064cb60 = 1;
  }
  iVar1 = *param_2;
  if ((*(int *)(iVar1 + 0x2068) != DAT_00641318) || (*(int *)(iVar1 + 0x206c) != DAT_0064131c)) {
    *(int *)(iVar1 + 0x2068) = DAT_00641318;
    *(int *)(iVar1 + 0x206c) = DAT_0064131c;
    DAT_0064cb60 = 1;
  }
  if (*(int *)(*param_2 + 0x2070) != DAT_00641320) {
    *(int *)(*param_2 + 0x2070) = DAT_00641320;
    DAT_0064cb60 = 1;
  }
  if (*(int *)(*param_2 + 0x2074) != DAT_00641324) {
    *(int *)(*param_2 + 0x2074) = DAT_00641324;
    DAT_0064cb60 = 1;
  }
  if (*(int *)(*param_2 + 0x2078) != DAT_00641328) {
    *(int *)(*param_2 + 0x2078) = DAT_00641328;
    DAT_0064cb60 = 1;
  }
  if (*(char *)(*param_2 + 0x2088) != '\0') {
    LVar5 = 0;
    DAT_0064cb54 = 1;
    WVar4 = 0;
    UVar3 = 0x14e;
    *(undefined1 *)(*param_2 + 0x2088) = 0;
    pHVar2 = GetDlgItem(param_1,0x452);
    SendMessageA(pHVar2,UVar3,WVar4,LVar5);
  }
  if (*(int *)(*param_2 + 0x218c) != DAT_0064143c) {
    *(int *)(*param_2 + 0x218c) = DAT_0064143c;
    DAT_0064cb54 = 1;
  }
  if (*(int *)(*param_2 + 0x2198) != DAT_00641448) {
    *(int *)(*param_2 + 0x2198) = DAT_00641448;
    DAT_0064cb54 = 1;
  }
  if (*(int *)(*param_2 + 0x219c) != DAT_0064144c) {
    *(int *)(*param_2 + 0x219c) = DAT_0064144c;
    DAT_0064cb54 = 1;
  }
  if (*(int *)(*param_2 + 0x21a8) != DAT_00641458) {
    *(int *)(*param_2 + 0x21a8) = DAT_00641458;
    DAT_0064cb54 = 1;
  }
  if (*(int *)(*param_2 + 0x21ac) != DAT_0064145c) {
    *(int *)(*param_2 + 0x21ac) = DAT_0064145c;
    DAT_0064cb54 = 1;
  }
  if (*(int *)(*param_2 + 0x21a4) != DAT_00641454) {
    *(int *)(*param_2 + 0x21a4) = DAT_00641454;
    DAT_0064cb54 = 1;
  }
  if (*(int *)(*param_2 + 0x21a0) != DAT_00641450) {
    *(int *)(*param_2 + 0x21a0) = DAT_00641450;
    DAT_0064cb54 = 1;
  }
  if (*(char *)(*param_2 + 0x21b0) != '\0') {
    LVar5 = 0;
    WVar4 = 0;
    UVar3 = 0x14e;
    DAT_0064cb48 = 1;
    pHVar2 = GetDlgItem(param_1,0x454);
    SendMessageA(pHVar2,UVar3,WVar4,LVar5);
  }
  *(undefined1 *)(*param_2 + 0x21b0) = 0;
  if (*(int *)(*param_2 + 0x22b4) != DAT_00641564) {
    *(int *)(*param_2 + 0x22b4) = DAT_00641564;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22b8) != DAT_00641568) {
    *(int *)(*param_2 + 0x22b8) = DAT_00641568;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22bc) != DAT_0064156c) {
    *(int *)(*param_2 + 0x22bc) = DAT_0064156c;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22c0) != DAT_00641570) {
    *(int *)(*param_2 + 0x22c0) = DAT_00641570;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22c4) != DAT_00641574) {
    *(int *)(*param_2 + 0x22c4) = DAT_00641574;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22c8) != DAT_00641578) {
    *(int *)(*param_2 + 0x22c8) = DAT_00641578;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22cc) != DAT_0064157c) {
    *(int *)(*param_2 + 0x22cc) = DAT_0064157c;
    DAT_0064cb48 = 1;
  }
  if (*(int *)(*param_2 + 0x22d0) != DAT_00641580) {
    *(int *)(*param_2 + 0x22d0) = DAT_00641580;
    DAT_0064cb48 = 1;
  }
  if (DAT_0064cb10 != (int *)0x0) {
    DAT_0064cb40 = 1;
    (**(code **)(*DAT_0064cb10 + 8))(DAT_0064cb10);
  }
  if ((((DAT_0064cb60 != 0) || (DAT_0064cb54 != 0)) || (DAT_0064cb48 != 0)) || (DAT_0064cb40 != 0))
  {
    LVar5 = 0;
    UVar3 = 0x468;
    param_2[2] = 1;
    param_2[0x1d] = 1;
    pHVar2 = param_1;
    hWnd = GetParent(param_1);
    SendMessageA(hWnd,UVar3,(WPARAM)pHVar2,LVar5);
  }
  FUN_004b5e50(param_1,param_2);
  FUN_004b5520(param_1,param_2);
  FUN_004b5720(param_1,param_2);
  FUN_004b59b0(param_1,param_2);
  return 1;
}


