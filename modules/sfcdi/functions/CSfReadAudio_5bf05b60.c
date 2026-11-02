/* Module: sfcdi.dll
   Function: CSfReadAudio
   Address: 5bf05b60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: __thiscall CSfReadAudio::CSfReadAudio(unsigned int) */

CSfReadAudio * __thiscall CSfReadAudio::CSfReadAudio(CSfReadAudio *this,uint param_1)

{
  int iVar1;
  CSfReadAudio *pCVar2;
  
  *(uint *)(this + 0x44) = param_1;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  pCVar2 = this + 8;
                    /* 0x5b60  1  ??0CSfReadAudio@@QAE@I@Z */
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar2 = 0;
    pCVar2 = pCVar2 + 4;
  }
  return this;
}


