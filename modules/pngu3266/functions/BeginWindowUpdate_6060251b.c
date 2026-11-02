/* Module: pngu3266.dll
   Function: BeginWindowUpdate
   Address: 6060251b
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNMultipleWindowUpdate::BeginWindowUpdate(void *) */

int __thiscall
CPNMultipleWindowUpdate::BeginWindowUpdate(CPNMultipleWindowUpdate *this,void *param_1)

{
                    /* 0x1251b  828  ?BeginWindowUpdate@CPNMultipleWindowUpdate@@UAEHPAX@Z */
  *(undefined4 *)(this + 0x20) = 1;
  return (uint)(*(int *)(this + 0x10) == 0);
}


