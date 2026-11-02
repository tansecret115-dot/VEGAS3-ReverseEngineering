/* Module: pngu3266.dll
   Function: Create
   Address: 605f5764
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: virtual int __thiscall CPNFont::Create(int,int,int,int,char const *,int) */

int __thiscall
CPNFont::Create(CPNFont *this,int param_1,int param_2,int param_3,int param_4,char *param_5,
               int param_6)

{
                    /* 0x5764  901  ?Create@CPNFont@@UAEHHHHHPBDH@Z */
  *(int *)(this + 0x10) = param_2;
  *(int *)(this + 0x18) = param_3;
  *(int *)(this + 0x1c) = param_4;
  *(int *)(this + 0xc) = param_1;
  *(int *)(this + 0x24) = param_6;
  if (param_5 != (char *)0x0) {
    *(char **)(this + 0x28) = param_5;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return 1;
}


