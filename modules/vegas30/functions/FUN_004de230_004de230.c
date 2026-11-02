/* Module: vegas30.exe
   Function: FUN_004de230
   Address: 004de230
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004de230(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = param_1;
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_1 + 0xf20) != 0)) {
    bVar3 = *(int *)(param_2 + 0xd50) != 0;
    param_1 = 1;
    param_2 = 1;
    piVar2 = (int *)FUN_005b8760(DAT_0064b138);
    if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
      param_1 = 0;
      param_2 = 0;
    }
    SendMessageA(*(HWND *)(iVar1 + 0xf20),0x401,0x1454,(uint)bVar3);
    SendMessageA(*(HWND *)(iVar1 + 0xf20),0x401,0x1450,(uint)bVar3);
    SendMessageA(*(HWND *)(iVar1 + 0xf20),0x401,0x1457,param_1);
    SendMessageA(*(HWND *)(iVar1 + 0xf20),0x401,0x1464,param_2);
    SendMessageA(*(HWND *)(iVar1 + 0xf20),0x401,0x1458,(uint)bVar3);
  }
  return;
}


