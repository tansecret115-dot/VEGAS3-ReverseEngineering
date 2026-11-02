/* Module: vegas30k.dll
   Function: FUN_011c09f0
   Address: 011c09f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011c09f0(int *param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint uStack_10;
  int iStack_c;
  undefined1 local_8 [8];
  
  if (param_1[6] != 0) {
    (**(code **)(*param_1 + 0xc))(param_1,local_8);
    piVar4 = param_1 + 0x208;
    iVar6 = 0x40;
    do {
      if ((HANDLE)*piVar4 != (HANDLE)0x0) {
        iVar3 = piVar4[3] + piVar4[5] + (uint)CARRY4(piVar4[2],piVar4[4]);
        if ((iVar3 <= iStack_c) &&
           ((iVar3 < iStack_c || ((uint)(piVar4[2] + piVar4[4]) <= uStack_10)))) {
          SetEvent((HANDLE)*piVar4);
          *piVar4 = 0;
          param_1[6] = param_1[6] + -1;
        }
      }
      piVar4 = piVar4 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = 0x40;
    do {
      piVar4 = param_1 + 8;
      if (*piVar4 != 0) {
        lVar5 = __allmul(param_1[0xe],0,param_1[0xc],param_1[0xd]);
        lVar5 = lVar5 + *(longlong *)(param_1 + 10);
        iVar3 = (int)((ulonglong)lVar5 >> 0x20);
        if (iVar3 <= iStack_c) {
          if (iVar3 < iStack_c) goto LAB_011c0aaa;
          do {
            if (uStack_10 < (uint)lVar5) break;
LAB_011c0aaa:
            do {
              ReleaseSemaphore((HANDLE)*piVar4,1,(LPLONG)0x0);
              param_1[0xe] = param_1[0xe] + 1;
              puVar1 = (uint *)(param_1 + 0xc);
              iVar3 = (int)((ulonglong)lVar5 >> 0x20) + param_1[0xd] +
                      (uint)CARRY4((uint)lVar5,*puVar1);
              lVar2 = lVar5 + *(longlong *)puVar1;
              lVar5 = lVar5 + *(longlong *)puVar1;
            } while (iVar3 < iStack_c);
            lVar5 = lVar2;
          } while (iVar3 <= iStack_c);
        }
      }
      iVar6 = iVar6 + -1;
      param_1 = piVar4;
    } while (iVar6 != 0);
  }
  return;
}


