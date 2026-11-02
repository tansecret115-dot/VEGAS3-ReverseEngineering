/* Module: sfcdi.dll
   Function: Start
   Address: 5bf05d00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: long __stdcall CSfReadAudio::Start(struct cdreadaudiotag *) */

long CSfReadAudio::Start(cdreadaudiotag *param_1)

{
  HANDLE pvVar1;
  int iVar2;
  cdreadaudiotag *pcVar3;
  undefined4 *in_stack_00000008;
  
                    /* 0x5d00  137  ?Start@CSfReadAudio@@QAGJPAUcdreadaudiotag@@@Z */
  pcVar3 = param_1 + 8;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pcVar3 = *in_stack_00000008;
    in_stack_00000008 = in_stack_00000008 + 1;
    pcVar3 = pcVar3 + 4;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_5bf18c70(*(int *)(param_1 + 0x2c),0,*(undefined4 *)(param_1 + 0x10));
  pvVar1 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_5bf05ac0,
                        param_1 + 8,0,(LPDWORD)(param_1 + 4));
  *(HANDLE *)param_1 = pvVar1;
  return (-(uint)(pvVar1 != (HANDLE)0x0) & 0x7ff8fff2) + 0x8007000e;
}


