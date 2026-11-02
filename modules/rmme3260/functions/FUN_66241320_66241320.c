/* Module: rmme3260.dll
   Function: FUN_66241320
   Address: 66241320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66241320(int param_1)

{
  DWORD DVar1;
  int iVar2;
  undefined4 *puVar3;
  
  DVar1 = GetCurrentThreadId();
  if (*(DWORD *)(param_1 + 0x84) == DVar1) {
    while( true ) {
      if ((int *)(param_1 + 0x98) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xa8);
      }
      if (iVar2 == 0) break;
      puVar3 = (undefined4 *)FUN_66250ae0((int *)(param_1 + 0x98));
      switch(*puVar3) {
      case 0:
        MoveWindow((HWND)puVar3[2],puVar3[3],puVar3[4],puVar3[5],puVar3[6],puVar3[7]);
        operator_delete(puVar3);
        break;
      case 1:
        UpdateWindow((HWND)puVar3[2]);
        operator_delete(puVar3);
        break;
      case 2:
        ShowWindow((HWND)puVar3[2],puVar3[3]);
        operator_delete(puVar3);
        break;
      case 3:
        SetWindowPos((HWND)puVar3[2],(HWND)puVar3[3],puVar3[4],puVar3[5],puVar3[6],puVar3[7],
                     puVar3[8]);
        operator_delete(puVar3);
        break;
      case 4:
        SetWindowRgn((HWND)puVar3[2],(HRGN)puVar3[3],puVar3[4]);
        operator_delete(puVar3);
        break;
      case 5:
        FUN_6623f010((void *)puVar3[1],puVar3[2]);
        operator_delete(puVar3);
        break;
      case 6:
        FUN_6623f0d0((void *)puVar3[1],puVar3[2]);
      default:
        operator_delete(puVar3);
      }
    }
  }
  return;
}


