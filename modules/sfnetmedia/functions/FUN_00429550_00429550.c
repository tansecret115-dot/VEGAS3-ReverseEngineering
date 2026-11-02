/* Module: sfnetmedia.dll
   Function: FUN_00429550
   Address: 00429550
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall
FUN_00429550(void *this,uchar *param_1,uchar *param_2,uchar *param_3,undefined4 *param_4,
            uint param_5,uchar *param_6)

{
  HGLOBAL hMem;
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  iVar3 = -0x7fffbffb;
  if (*(int *)((int)this + 0x68) != 0) {
    if (*(int *)((int)this + 0x38) == 0) {
      if ((((param_1 == (uchar *)0x0) || (param_2 == (uchar *)0x0)) ||
          (param_4 == (undefined4 *)0x0)) || (param_5 == 0)) {
        iVar3 = -0x7ff8ffa9;
      }
      else {
        iVar3 = FUN_00428eb0(this,param_1,param_2,param_3,param_6);
        if (-1 < iVar3) {
          hMem = GlobalAlloc(0x40,param_5);
          puVar1 = GlobalLock(hMem);
          *(undefined4 **)((int)this + 0x84) = puVar1;
          if (puVar1 == (undefined4 *)0x0) {
            iVar3 = -0x7ff8fff2;
            FUN_00428fa0((int)this);
          }
          else {
            for (uVar2 = param_5 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
              *puVar1 = *param_4;
              param_4 = param_4 + 1;
              puVar1 = puVar1 + 1;
            }
            for (uVar2 = param_5 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
              *(undefined1 *)puVar1 = *(undefined1 *)param_4;
              param_4 = (undefined4 *)((int)param_4 + 1);
              puVar1 = (undefined4 *)((int)puVar1 + 1);
            }
            *(uint *)((int)this + 0x88) = param_5;
            FUN_004276c0(this,0x12d);
            iVar3 = 0x4e011;
          }
        }
      }
    }
    else {
      iVar3 = -0x7ffb1f54;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return iVar3;
}


