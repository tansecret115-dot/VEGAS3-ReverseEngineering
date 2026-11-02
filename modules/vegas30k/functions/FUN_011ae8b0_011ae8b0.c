/* Module: vegas30k.dll
   Function: FUN_011ae8b0
   Address: 011ae8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_011ae8b0(int param_1)

{
  int *piVar1;
  int iVar2;
  HGLOBAL hMem;
  LPVOID pvVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EDI;
  undefined8 uVar7;
  char *pcVar8;
  int local_18;
  int local_14;
  int local_10;
  int iStack_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  *(undefined4 *)(param_1 + 0x840) = 0;
  *(undefined4 *)(param_1 + 0x848) = 0;
  *(undefined4 *)(param_1 + 0x850) = 0;
  *(undefined4 *)(param_1 + 0x690) = 0;
  *(undefined4 *)(param_1 + 0x83c) = 0;
  *(undefined4 *)(param_1 + 0x844) = 0;
  *(undefined4 *)(param_1 + 0x84c) = 0;
  *(undefined4 *)(param_1 + 0x854) = 0;
  *(undefined4 *)(param_1 + 0x694) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    local_8 = *(undefined4 *)(param_1 + 0x4fc);
    uStack_4 = 0;
    uVar7 = ftol();
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    *(undefined8 *)(param_1 + 0x840) = uVar7;
    *(undefined4 *)(param_1 + 0x870) = *(undefined4 *)(param_1 + 0x840);
    *(undefined4 *)(param_1 + 0x874) = uVar6;
    *(undefined4 *)(param_1 + 0x898) = *(undefined4 *)(param_1 + 0x840);
    *(undefined4 *)(param_1 + 0x878) = *(undefined4 *)(param_1 + 0x870);
    *(undefined4 *)(param_1 + 0x87c) = uVar6;
    iVar2 = *(int *)(param_1 + 0x878);
    *(undefined4 *)(param_1 + 0x89c) = uVar6;
    *(int *)(param_1 + 0x6ec) = iVar2;
    goto LAB_011aeb43;
  }
  local_10 = *(int *)(param_1 + 0x4fc);
  iStack_c = 0;
  uVar7 = ftol();
  *(undefined8 *)(param_1 + 0x840) = uVar7;
  piVar1 = *(int **)(*(int *)(param_1 + 0x2c) + 0x66c);
  if (piVar1 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))(*(int **)(param_1 + 0x638),0x1c);
    if (local_18 == 0) goto LAB_011aebea;
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x84))(*(int **)(param_1 + 0x2c),6);
    if (local_10 == 0 && iStack_c == 0) {
      pcVar8 = "AllocateMixBuffer(%s) : mixer has latency of ZERO!";
      goto LAB_011aec04;
    }
    local_8 = *(undefined4 *)(param_1 + 0x4fc);
    uStack_4 = 0;
    uVar7 = ftol();
    *(undefined8 *)(param_1 + 0x870) = uVar7;
  }
  else {
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1,0,0,&local_14);
    if (iVar2 < 0) {
      return iVar2;
    }
    *(int *)(param_1 + 0x840) = unaff_EDI * 2;
    *(int *)(param_1 + 0x844) = unaff_EDI * 2 >> 0x1f;
    uVar7 = __alldiv(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x844),unaff_EDI,
                     unaff_EDI >> 0x1f);
    uVar7 = __allmul(uVar7,unaff_EDI,unaff_EDI >> 0x1f);
    *(undefined8 *)(param_1 + 0x840) = uVar7;
    (**(code **)(**(int **)(param_1 + 0x638) + 0x5c))
              (*(int **)(param_1 + 0x638),0x1c,&stack0xffffffd4);
    if (local_18 == 0) {
LAB_011aebea:
      pcVar8 = "AllocateMixBuffer(%s) : pAudioOut has 0 buffers allocated!";
LAB_011aec04:
      SfErrorHandler_DetailsAddString(0x80004005,pcVar8);
      return -0x7fff0001;
    }
    *(int *)(param_1 + 0x870) = local_14 * 2;
    *(int *)(param_1 + 0x874) = local_14 * 2 >> 0x1f;
  }
  uVar7 = __alldiv(*(undefined4 *)(param_1 + 0x870),*(undefined4 *)(param_1 + 0x874),local_18);
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  *(undefined8 *)(param_1 + 0x878) = uVar7;
  iVar2 = *(int *)(param_1 + 0x878);
  *(undefined8 *)(param_1 + 0x898) = uVar7;
  if (iVar2 == 0 && iVar5 == 0) {
    SfErrorHandler_DetailsAddString
              (0x8000ffff,
               "AllocateMixBuffer(%s) : m_ccWanted is ZERO! (m_ccPreroll %I64d nBuffers %d)",
               param_1 + 0x1f0,*(undefined4 *)(param_1 + 0x870),*(undefined4 *)(param_1 + 0x874));
    SfErrorHandler_DetailsAddString
              (0x8000ffff,
               "AllocateMixBuffer(%s) : m_wfxPrepared.nSamplesPerSec is %d! (m_ccPreroll %I64d nBuffers %d)"
               ,param_1 + 0x1f0);
    return -0x7fff0001;
  }
  uVar7 = __allmul(iVar2,iVar5,local_18);
  *(undefined8 *)(param_1 + 0x870) = uVar7;
  *(int *)(param_1 + 0x6ec) = iVar2;
  uVar7 = __alldiv(*(undefined4 *)(param_1 + 0x840),*(undefined4 *)(param_1 + 0x844),iVar2);
  uVar7 = __allmul(uVar7,iVar2);
  *(undefined8 *)(param_1 + 0x840) = uVar7;
LAB_011aeb43:
  hMem = GlobalAlloc(0x42,(*(int *)(param_1 + 0x840) + iVar2 + 500 + *(int *)(param_1 + 0x898)) *
                          (uint)*(ushort *)(param_1 + 0x504));
  pvVar3 = GlobalLock(hMem);
  *(LPVOID *)(param_1 + 0x83c) = pvVar3;
  if (pvVar3 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x504);
  *(undefined4 *)(param_1 + 0x888) = 500;
  pvVar3 = (LPVOID)((int)pvVar3 + *(int *)(param_1 + 0x840) * uVar4);
  *(LPVOID *)(param_1 + 0x894) = pvVar3;
  pvVar3 = (LPVOID)((int)pvVar3 + uVar4 * *(int *)(param_1 + 0x898));
  *(LPVOID *)(param_1 + 0x6e8) = pvVar3;
  *(undefined4 *)(param_1 + 0x88c) = 0;
  *(LPVOID *)(param_1 + 0x880) = (LPVOID)(*(int *)(param_1 + 0x6ec) * uVar4 + (int)pvVar3);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x674));
  return 0;
}


