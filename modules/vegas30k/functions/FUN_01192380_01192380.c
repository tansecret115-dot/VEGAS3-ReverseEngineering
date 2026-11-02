/* Module: vegas30k.dll
   Function: FUN_01192380
   Address: 01192380
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_01192380(int param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint unaff_EDI;
  longlong lVar6;
  int iVar7;
  int iStack_c;
  undefined1 local_8 [8];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar5 = *(int **)(*(int *)(param_1 + 0xc) + 0xc4);
    (**(code **)(*piVar5 + 0xc))(piVar5,local_8);
    puVar4 = (undefined4 *)(param_1 + 0x818);
    iVar7 = 0x40;
    do {
      if ((HANDLE)*puVar4 != (HANDLE)0x0) {
        iVar3 = puVar4[5] + puVar4[3] + (uint)CARRY4(puVar4[4],puVar4[2]);
        if ((iVar3 <= iStack_c) &&
           ((iVar3 < iStack_c || ((uint)(puVar4[4] + puVar4[2]) <= unaff_EDI)))) {
          SetEvent((HANDLE)*puVar4);
          *puVar4 = 0;
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
        }
      }
      puVar4 = puVar4 + 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    piVar5 = (int *)(param_1 + 0x18);
    iVar7 = 0x40;
    do {
      if (*piVar5 != 0) {
        lVar6 = __allmul(piVar5[6],0,piVar5[4],piVar5[5]);
        lVar6 = lVar6 + *(longlong *)(piVar5 + 2);
        iVar3 = (int)((ulonglong)lVar6 >> 0x20);
        if (iVar3 <= iStack_c) {
          if (iVar3 < iStack_c) goto LAB_0119243b;
          do {
            if (unaff_EDI < (uint)lVar6) break;
LAB_0119243b:
            do {
              ReleaseSemaphore((HANDLE)*piVar5,1,(LPLONG)0x0);
              piVar5[6] = piVar5[6] + 1;
              puVar1 = (uint *)(piVar5 + 4);
              iVar3 = (int)((ulonglong)lVar6 >> 0x20) + piVar5[5] +
                      (uint)CARRY4((uint)lVar6,*puVar1);
              lVar2 = lVar6 + *(longlong *)puVar1;
              lVar6 = lVar6 + *(longlong *)puVar1;
            } while (iVar3 < iStack_c);
            lVar6 = lVar2;
          } while (iVar3 <= iStack_c);
        }
      }
      piVar5 = piVar5 + 8;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}


