/* Module: vegas30k.dll
   Function: FUN_011d62c0
   Address: 011d62c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_011d62c0(int param_1,int *param_2)

{
  LPMIDIHDR pmh;
  uint uVar1;
  MMRESULT MVar2;
  int iVar3;
  int unaff_ESI;
  uint unaff_EDI;
  undefined1 local_8 [8];
  
  if (((*(byte *)(param_1 + 8) & 1) != 0) && (*(int *)(param_1 + 0x188) != 0)) {
    if (param_2 == (int *)0x0) {
      return -0x7fffbffd;
    }
    if (param_2[6] != 0) {
      *(int *)(param_2[6] + 8) = param_2[8];
    }
    pmh = (LPMIDIHDR)param_2[6];
    (**(code **)(*param_2 + 0x30))(param_2,local_8);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    MVar2 = midiStreamOut(*(HMIDISTRM *)(param_1 + 0x188),pmh,0x40);
    iVar3 = FUN_011c2260(MVar2);
    if (-1 < iVar3) {
      uVar1 = *(uint *)(param_1 + 0x288);
      *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + 1;
      *(int **)(param_1 + 0x228) = param_2;
      *(uint *)(param_1 + 0x288) = uVar1 + unaff_EDI;
      *(uint *)(param_1 + 0x28c) =
           *(int *)(param_1 + 0x28c) + unaff_ESI + (uint)CARRY4(uVar1,unaff_EDI);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
    return iVar3;
  }
  return -0x7ffb1fff;
}


