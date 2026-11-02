/* Module: dnet3260.dll
   Function: FUN_63051c80
   Address: 63051c80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall FUN_63051c80(void *this,undefined4 *param_1)

{
  short sVar1;
  void *this_00;
  undefined4 *this_01;
  FARPROC pFVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (*(int *)((int)this + 6) == 0) {
    this_00 = operator_new(0x18);
    if (this_00 == (void *)0x0) {
      this_01 = (undefined4 *)0x0;
    }
    else {
      this_01 = FUN_63052af0(this_00,s_ddnt3260_dll_63055068,2);
    }
    *(undefined4 **)((int)this + 6) = this_01;
    if (this_01 == (undefined4 *)0x0) {
      return 0x8004000f;
    }
    if (this_01[1] != 0) {
      return 0x8004000f;
    }
    pFVar2 = FUN_63052d40(this_01,s_OpenDecoder_6305505c);
    *(FARPROC *)((int)this + 0x16) = pFVar2;
    pFVar2 = FUN_63052d40(*(void **)((int)this + 6),s_CloseDecoder_6305504c);
    *(FARPROC *)((int)this + 0x1a) = pFVar2;
    pFVar2 = FUN_63052d40(*(void **)((int)this + 6),s_dbInitDecoder_6305503c);
    *(FARPROC *)((int)this + 0x26) = pFVar2;
    pFVar2 = FUN_63052d40(*(void **)((int)this + 6),s_dbDecode_63055030);
    *(FARPROC *)((int)this + 0x2a) = pFVar2;
    pFVar2 = FUN_63052d40(*(void **)((int)this + 6),s_dbFreeDecoder_63055020);
    *(FARPROC *)((int)this + 0x2e) = pFVar2;
  }
  if (*(int *)((int)this + 0xe) == 0) {
    if (*(code **)((int)this + 0x16) == (code *)0x0) {
      return 0x8004000f;
    }
    sVar1 = (**(code **)((int)this + 0x16))((undefined4 *)((int)this + 0xe));
    if (sVar1 != 0) {
      return 0x80004005;
    }
  }
  if ((*(code **)((int)this + 0x26) != (code *)0x0) &&
     (sVar1 = (**(code **)((int)this + 0x26))
                        (*(undefined4 *)((int)this + 0xe),*param_1,*(undefined2 *)((int)param_1 + 6)
                         ,(int)this + 2), sVar1 != 0)) {
    uVar3 = 0x80004005;
  }
  return uVar3;
}


