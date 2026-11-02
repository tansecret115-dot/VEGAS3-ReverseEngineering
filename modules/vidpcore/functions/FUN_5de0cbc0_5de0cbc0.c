/* Module: vidpcore.dll
   Function: FUN_5de0cbc0
   Address: 5de0cbc0
   Source: Ghidra pseudocode (Stage 10 batch) */


HMENU __fastcall FUN_5de0cbc0(int param_1)

{
  undefined4 *puVar1;
  HMENU pHVar2;
  int iVar3;
  int iVar4;
  HMENU unaff_ESI;
  UINT_PTR uIDNewItem;
  int *piVar5;
  int *piVar6;
  undefined4 *local_31c;
  int local_318 [2];
  HMENU local_310;
  undefined1 uStack_21d;
  WCHAR aWStack_21c [270];
  
  pHVar2 = CreatePopupMenu();
  if (pHVar2 != (HMENU)0x0) {
    puVar1 = (undefined4 *)**(int **)(param_1 + 8);
    local_31c = (undefined4 *)0x0;
    local_310 = pHVar2;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,&DAT_5df17ab0,&local_31c);
    }
    piVar6 = local_318;
    piVar5 = (int *)&DAT_5df180c0;
    iVar3 = (**(code **)*local_31c)(local_31c);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(unaff_ESI->unused + 0xc))(unaff_ESI,&stack0xfffffce0);
      if (-1 < iVar3) {
        uIDNewItem = 0x9e34;
        if (0xa026 < (int)piVar6) {
          piVar6 = (int *)0xa027;
        }
        iVar3 = 0;
        if (-1 < (int)piVar6) {
          do {
            iVar4 = (**(code **)(*piVar5 + 0x10))(piVar5,iVar3,aWStack_21c,0x104);
            if (-1 < iVar4) {
              if ((&stack0x00000000 == (undefined1 *)0x21c) || (aWStack_21c[0] != L'\0')) {
                WideCharToMultiByte(0,0,aWStack_21c,-1,&stack0xfffffce0,0x104,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
              }
              uStack_21d = 0;
              AppendMenuA(unaff_ESI,0,uIDNewItem,&stack0xfffffce0);
              uIDNewItem = uIDNewItem + 1;
            }
            iVar3 = iVar3 + 1;
            pHVar2 = unaff_ESI;
          } while (iVar3 <= (int)piVar6);
        }
      }
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
  }
  return pHVar2;
}


