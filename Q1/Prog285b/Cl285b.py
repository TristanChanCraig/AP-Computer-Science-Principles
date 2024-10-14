class Salesperson:
    def __init__(self, id, code, sales):
        self.id = id
        self.code = code
        self.sales = sales
        self.comm = 0.0
    
    def __str__(self): # toString
        return f"{self.id}    {self.code}    ${self.sales:.2f}    ${self.comm:.2f}"
    
    def calc(self):
        if self.code == 5 or self.code == 8:
            if self.sales <= 5000:
                self.comm = self.sales * 0.075
            else:
                self.comm = 5000 * 0.075 + (self.sales - 5000) * 0.085
        elif self.code == 17:
            if self.sales <= 3500:
                self.comm = self.sales * 0.095
            else:
                self.comm = 3500 * 0.095 + (self.sales - 3500) * 0.12
"""
Number    Code    Sales    Commission
101    17    $2250.00    $213.75
103    5    $4000.00    $300.00
117    3    $7350.00    $0.00
118    8    $7350.00    $574.75
125    5    $6500.00    $502.50
138    17    $6375.00    $677.50
192    8    $8125.00    $640.62
203    8    $3250.00    $243.75
218    5    $5000.00    $375.00
235    5    $5250.00    $396.25
264    17    $4150.00    $410.50
291    17    $750.00    $71.25
"""
