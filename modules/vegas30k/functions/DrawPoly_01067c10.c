/* Module: vegas30k.dll
   Function: DrawPoly
   Address: 01067c10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* public: void __thiscall A_Buffer::DrawPoly(struct SF3DPOLY *,double,double) */

void __thiscall A_Buffer::DrawPoly(A_Buffer *this,SF3DPOLY *param_1,double param_2,double param_3)

{
  undefined4 unaff_retaddr;
  
                    /* 0x67c10  35  ?DrawPoly@A_Buffer@@QAEXPAUSF3DPOLY@@NN@Z */
  DrawComplexPoly(this,param_1,param_2,(double)CONCAT44(unaff_retaddr,param_3._0_4_));
  return;
}


