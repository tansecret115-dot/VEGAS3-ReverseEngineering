/* Module: pngu3266.dll
   Function: RemoveAllText
   Address: 60611958
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual void __thiscall XPNScrollingText::RemoveAllText(void) */

void __thiscall XPNScrollingText::RemoveAllText(XPNScrollingText *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* 0x21958  1755  ?RemoveAllText@XPNScrollingText@@UAEXXZ */
  iVar3 = 0;
  iVar1 = *(int *)(this + 0x102);
  if (0 < iVar1) {
    do {
      piVar2 = *(int **)(*(int *)(this + 0xfe) + iVar3 * 4);
      if (piVar2 != (int *)0x0) {
        FUN_60618cd0(piVar2);
        operator_delete(piVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  FUN_6061a4d0(this + 0xfe,0,0xffffffff);
  return;
}


