/* Module: sfppack2.dll
   Function: CBaseOutputPin
   Address: 5cd3d13a
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CBaseOutputPin::CBaseOutputPin(char const *,class CBaseFilter *,class
   CCritSec *,long *,unsigned short const *)
    public: __thiscall CBaseOutputPin::CBaseOutputPin(unsigned short const *,class CBaseFilter
   *,class CCritSec *,long *,unsigned short const *)
   
   Library: Visual Studio 2012 Release */

void * __thiscall
CBaseOutputPin(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
              undefined4 param_4,short *param_5)

{
  FUN_5cd3c944(this,param_1,param_2,param_3,param_4,param_5,1);
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  return this;
}


